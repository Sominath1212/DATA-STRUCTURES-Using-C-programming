#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct personif
{
    char name[20];
    char gen[10];
    char aadhar[20];
};
struct accif
{
    char ac_no[20];
    char ac_type[10];
    char ifsc[20];
};
struct emplif
{
    char company[20];
    char post[20];
    char department[20];
};
struct node
{
    struct personif *pinfo;
    struct accif *ainfo;
    struct emplif *eminfo;
    struct node *next;
};
struct node *first = NULL;
struct personif *person_information()
{
    struct personif *nn;
    nn = malloc(sizeof(struct personif));
    fflush(stdin);
    printf("Enter person's name=\n");
    fgets(nn->name, sizeof(nn->name), stdin);
    fflush(stdin);
    printf("Enter aadhar number of person=\n");
    fgets(nn->aadhar, sizeof(nn->aadhar), stdin);
    fflush(stdin);
    printf("Enter gender of person=\n ");
    fgets(nn->gen, sizeof(nn->gen), stdin);
    return nn;
} // end of method
struct accif *account_information()
{
    struct accif *nn;
    nn = malloc(sizeof(struct accif));
    fflush(stdin);
    printf("Enter account number=\n");
    fgets(nn->ac_no, sizeof(nn->ac_no), stdin);
    fflush(stdin);
    printf("Enter account type =\n");
    fgets(nn->ac_type, sizeof(nn->ac_type), stdin);
    fflush(stdin);
    printf("Enter accounts IFSC code=\n");
    fgets(nn->ifsc, sizeof(nn->ifsc), stdin);
    return nn;
} // end of methed
struct emplif *employeement_information()
{
    struct emplif *nn;
    nn = malloc(sizeof(struct emplif));
    fflush(stdin);
    printf("Ente company name=\n");
    fgets(nn->company, sizeof(nn->company), stdin);

    fflush(stdin);
    printf("Enter department=\n");
    fgets(nn->department, sizeof(nn->department), stdin);

    fflush(stdin);
    printf("Enter post of employee=\n");
    fgets(nn->post, sizeof(nn->post), stdin);

    return nn;
} //
void add_person()
{

    struct node *nn, *temp, *temp2;
    int ch;
    char addhar[20];
    nn = (struct node *)malloc(sizeof(struct node));
    // here not directly fill details
    nn->pinfo = person_information();
    nn->ainfo = account_information();
    nn->eminfo = employeement_information();
    nn->next = NULL;
    // above node not connected with the list

    if (first == NULL)
    {
        first = nn;
        printf("list is created..!\n");
    }
    else
    {
        printf("1.place person at first position\n");
        printf("2.place person at last position\n");
        printf("3.place person at specific position\n");
        printf("entet your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            nn->next = first;
            first = nn;
            printf("person place at first position\n");
            break;
        case 2:
            temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
            printf("person placed at last position\n");
            break;
        case 3:
            printf("Enter Aadhar number of person, \n which your want to add person after  that=\n");
            fflush(stdin);
            gets(addhar);

            int res;
            temp = first;
            while (temp->next != NULL)
            {
                res = strcmp(temp->pinfo->aadhar, addhar);
                if (res == 1)
                {
                    break;
                }
                temp = temp->next;
            }
            if (res == 0)
            {
                printf("requred person not found\n");
            }
            else
            {
                if (res == 1 && temp == first)
                {
                    nn->next = first;
                    first = nn;
                }
                else if (res == 1 && temp->next == NULL)
                {
                    temp->next = nn;
                }
                else
                {
                    nn->next = temp->next;
                    temp->next = nn;
                }
                printf("person placed at requered position\n");
            }
        }
    }

} // end of menthod add_person()
void delete()
{
    int ch, res;
    char aadhar[20];
    struct node *temp, *temp2;
    if (first == NULL)
    {
        printf("no such recond present \n");
    }
    else
    {

        printf("1.remove first position\n");
        printf("2.remove last person\n");
        printf("3.remove specific person\n");
        printf("Enter your choice =\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            first = first->next;
            printf("first person is removed\n");
            break;
        case 2:
            temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp2 = first;
            while (temp2->next != temp)
            {
                temp2 = temp2->next;
            }
            temp2->next = NULL;
            free(temp);
            printf("last person is removed \n");

            break;
        case 3:
            printf("enter person's aadhar number,\nwhich you want remove=\n");
            fflush(stdin);
            gets(aadhar);
            temp = first;
            while (temp->next != NULL)
            {
                res = strcmp(temp->pinfo->aadhar, aadhar);
                if (res == 1)
                {
                    break;
                }
                temp = temp->next;
            }
            if (res == 0)
            {
                printf("no such person found\n");
            }
            else
            {
                if (res == 1 && temp == first)
                {
                    first = first->next;
                }
                else if (res == 1 && temp->next == NULL)
                {
                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }
                    temp2->next = NULL;
                    free(temp);
                }
                else
                {
                    temp2 = first;
                    while (temp2->next != temp)
                    {
                        temp2 = temp2->next;
                    }
                    temp2->next = temp->next;
                    free(temp);
                }
                printf("selected person delete\n");
            }
        }
    }

} // end of method remove()
void search()
{
    struct node *temp;
    char aadhar[20];
    printf("Enter aadhar number of person,\nwhich you want to search=\n");
    fflush(stdin);
    gets(aadhar);
    int res;
    temp = first;
    while (temp->next != NULL)
    {
        res = (int)(temp->pinfo->aadhar, aadhar);
        if (res == 1)
        {
            break;
        }
        temp = temp->next;
    }
    if (res == 0)
    {
        printf("person not found\n");
    }
    else
    {
        printf("person found\n");
        printf("\n*********DETAILS*******\n");
        printf("\nPersonal Details:-\n");
        printf("\tNAME=%s\n", temp->pinfo->name);
        printf("\tAADHAR NO=%s\n", temp->pinfo->aadhar);
        printf("\tGENDER=%s\n", temp->pinfo->gen);
        printf("\nBank Deatils:-\n");
        printf("\tAccount No=%s\n", temp->ainfo->ac_no);
        printf("\tType=%s\n", temp->ainfo->ac_type);
        printf("\tIFSC code=%s\n", temp->ainfo->ifsc);
        printf("\nEmployeement deatils:-\n");
        printf("\tCompany=%s\n", temp->eminfo->company);
        printf("\tDepartment=%s\n", temp->eminfo->department);
        printf("\tPost=%s\n", temp->eminfo->post);
    }

} // end of method search()
void display()
{

    struct node *temp;
    temp = first;
    printf("\n*********RECORDS******\n");
    while (temp != NULL)
    {

        printf("\nPersonal informaton:-\n");
        printf("\n*********DETAILS*******\n");
        printf("\nPersonal Details:-\n");
        printf("\tNAME=%s\n", temp->pinfo->name);
        printf("\tAADHAR NO=%s\n", temp->pinfo->aadhar);
        printf("\tGENDER=%s\n", temp->pinfo->gen);
        printf("\nBank Deatils:-\n");
        printf("\tAccount No=%s\n", temp->ainfo->ac_no);
        printf("\tType=%s\n", temp->ainfo->ac_type);
        printf("\tIFSC code=%s\n", temp->ainfo->ifsc);
        printf("\nEmployeement deatils:-\n");
        printf("\tCompany=%s\n", temp->eminfo->company);
        printf("\tDepartment=%s\n", temp->eminfo->department);
        printf("\tPost=%s\n", temp->eminfo->post);
    }

} // end of method display()
int main()
{
    int ch;
    do
    {
        printf("1.add person\n");
        printf("2.remove person\n");
        printf("3.search person\n");
        printf("4.display all details\n");
        printf("5.exit\n");
        printf("Enter your choice=\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add_person();
            break;
        case 2:
            delete ();
            break;
        case 3:
            search();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice \n");
            break;
        }
    } while (1);
    return 0;
}