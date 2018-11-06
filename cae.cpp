#include<stdio.h>

char text[100], pos, choice;
int i, key;

int main()
{
    printf(" Alege functia:\n\n");
    printf("    1.Cod \n\n    2.Decod \n\n");
    scanf(" %c", &choice);

    if(choice=='1')
    {
        printf("  Introduceti textul pt codificare: ");
        scanf(" %s", text);
        printf("\n  Introduceti offset: ");
        scanf(" %d", &key);

        for(i = 0; text[i] != '\0'; ++i)
        {
            pos = text[i];

            if(pos >= 'a' && pos <= 'z')
            {
                pos = pos + key;

                if(pos > 'z')
                {
                    pos -= 26;
                }
                else if(pos < 'a')
                {
                    pos += 26;
                }
                text[i] = pos;
            }
            else if(pos >= 'A' && pos <= 'Z')
            {
                pos = pos + key;

                if(pos > 'Z')
                {
                    pos -= 26;
                }
                else if(pos < 'A')
                {
                    pos += 26;
                }

                text[i] = pos;
            }
        }

        printf("\n  Textul codat este: %s\n", text);
    }
    else if(choice=='2')
    {
        printf("  Introduceti codul pt decryptare:");
        scanf(" %s", text);
        printf("\n  Introduceti offsetul: ");
        scanf(" %d", &key);;

        for(i = 0; text[i] != '\0'; ++i)
        {
            pos = text[i];

            if(pos >= 'a' && pos <= 'z')
            {
                pos = pos - key;

                if(pos < 'a')
                {
                    pos += 26;
                }
                else if(pos > 'z')
                {
                    pos -= 26;
                }

                text[i] = pos;
            }
            else if(pos >= 'A' && pos <= 'Z')
            {
                pos = pos - key;

                if(pos < 'A')
                {
                    pos += 26;
                }
                else if(pos > 'Z')
                {
                    pos -= 26;
                }

                text[i] = pos;
            }
        }

        printf("\n  Textul decodificat este: %s\n", text);
    }
    else
    {
        printf("\n\n ~~Input Invalid. Pa!~~ \n");
        return 0;
    }
}
