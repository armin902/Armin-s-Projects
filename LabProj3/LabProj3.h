#ifndef LABPROJ3_H
#define LABPROJ3_H

int myFind(const char* targetStr, const char* subStr)
{
	int targetLength = strlen(targetStr);
	int subLength = strlen(subStr);
	int occurances = 0;
	int count = subLength;

	for (int i = 0; i <= targetLength - subLength; i++)
	{
		count = subLength;

		for (int j = 0; j < subLength; j++)
		{
			if (targetStr[i + j] == subStr[j])
			{
				count -= 1;
			}

			if (count == 0)
			{
				occurances++;
			}
		}
	}

	return occurances;
}



void improveFormat(char* targetStr)
{
	int targetLength = strlen(targetStr);
	int spaceCounter = 0;
	int charCounter = 0;

	for (int i = 0; i < targetLength; i++)
	{

		if (targetStr[i] != ' ')
		{
			targetStr[charCounter++] = targetStr[i];
			spaceCounter = 0;
		}

		else if (charCounter > 0 && targetStr[charCounter - 1] != ' ')
		{
			targetStr[charCounter++] = ' ';
			spaceCounter = 1;
		}

	}

	targetStr[charCounter] = '\0';

	if (charCounter > 0 && targetStr[charCounter - 1] == ' ')
	{
		targetStr[charCounter - 1] = '\0';
	}
}

#endif
