int numUniqueEmails(char** emails, int emailsSize) {
    int uniqueAddresses = 0;
    char seenAddresses[emailsSize][101];

    for (int i = 0; i < emailsSize; i++) {
        char* email = emails[i];

        char* atSymbol = strchr(email, '@');
        if (atSymbol == NULL) {
            continue; 
        }

       
        char localName[100];
        strncpy(localName, email, atSymbol - email);
        localName[atSymbol - email] = '\0';

        char* domainName = atSymbol + 1;

        char normalizedLocalName[100];
        char* normalizedLocalNamePtr = normalizedLocalName;
        for (char* c = localName; *c != '\0'; c++) {
            if (*c == '.') {
                continue;
            }
            if (*c == '+') {
                break;
            }
            *normalizedLocalNamePtr++ = *c;
        }
        *normalizedLocalNamePtr = '\0';
        char normalizedEmail[200];
        snprintf(normalizedEmail, sizeof(normalizedEmail), "%s@%s", normalizedLocalName, domainName);

        int isUnique = 1;
        for (int j = 0; j < uniqueAddresses; j++) {
            if (strcmp(seenAddresses[j], normalizedEmail) == 0) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            strcpy(seenAddresses[uniqueAddresses], normalizedEmail);
            uniqueAddresses++;
        }
    }

    return uniqueAddresses;
}
