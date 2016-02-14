void numToWords() {
	char input[7];
	int inputLen;
	int i, j, digit;
	//digit 7 is one millions and digit 1 is ones
	char output[200] = "";
	
	printf("Enter input: ");
	scanf("%s", input);
	
	inputLen = strlen(input);
	
	for(digit=inputLen, i=0; digit>=0; i++, digit--) {
		
		//ones million
		if(digit == 7) {
			if(input[i]=='0') {
				//strcat(output, "");
				continue; //skip concatenating "million"
			} else if(input[i]=='1') {
				strcat(output, " one");
			} else if(input[i]=='2') {
				strcat(output, " two");
			} else if(input[i]=='3') {
				strcat(output, " three");
			} else if(input[i]=='4') {
				strcat(output, " four");
			} else if(input[i]=='5') {
				strcat(output, " five");
			} else if(input[i]=='6') {
				strcat(output, " six");
			} else if(input[i]=='7') {
				strcat(output, " seven");
			} else if(input[i]=='8') {
				strcat(output, " eight");
			} else if(input[i]=='9') {
				strcat(output, " nine");
			} else {
				
			}
			strcat(output, " million");
		} 
		//hundred thousands
		else if(digit == 6) {
			if(input[i]=='0') {
				//strcat(output, "");
				continue; //so that "hundred" will not be concatenated to the output
			} else if(input[i]=='1') {
				strcat(output, " one");
			} else if(input[i]=='2') {
				strcat(output, " two");
			} else if(input[i]=='3') {
				strcat(output, " three");
			} else if(input[i]=='4') {
				strcat(output, " four");
			} else if(input[i]=='5') {
				strcat(output, " five");
			} else if(input[i]=='6') {
				strcat(output, " six");
			} else if(input[i]=='7') {
				strcat(output, " seven");
			} else if(input[i]=='8') {
				strcat(output, " eight");
			} else if(input[i]=='9') {
				strcat(output, " nine");
			} else {
				
			}
			strcat(output, " hundred");
			
			//if no or zero tens and ones thousand
			if(input[i+1]=='0' && input[i+2]=='0') {
				strcat(output, " thousand");
				digit-=2;
				i+=2; //skip 2 digits
			}
		}//ten thousands and one thousands
		else if(digit == 5) {
			//if 10-19
			if(input[i]=='1') {
				if(input[i+1]=='0') {
					strcat(output, " ten");
				} else if(input[i+1]=='1') {
					strcat(output, " eleven");
				} else if(input[i+1]=='2') {
					strcat(output, " twelve");
				} else if(input[i+1]=='3') {
					strcat(output, " thirteen");
				} else if(input[i+1]=='4') {
					strcat(output, " fourteen");
				} else if(input[i+1]=='5') {
					strcat(output, " fifteen");
				} else if(input[i+1]=='6') {
					strcat(output, " sixteen");
				} else if(input[i+1]=='7') {
					strcat(output, " seventeen");
				} else if(input[i+1]=='8') {
					strcat(output, " eighteen");
				} else if(input[i+1]=='9') {
					strcat(output, " nineteen");
				} else {
				
				}
				strcat(output, " thousand");
				digit--; //skip one digit
				i++;
			}
			else {
				//ten thousands
				if(input[i]=='0') {
					//strcat(output, "");
					//continue;
				} else if(input[i]=='2') {
					strcat(output, " twenty");
				} else if(input[i]=='3') {
					strcat(output, " thirty");
				} else if(input[i]=='4') {
					strcat(output, " fourty");
				} else if(input[i]=='5') {
					strcat(output, " fifty");
				} else if(input[i]=='6') {
					strcat(output, " sixty");
				} else if(input[i]=='7') {
					strcat(output, " seventy");
				} else if(input[i]=='8') {
					strcat(output, " eighty");
				} else if(input[i]=='9') {
					strcat(output, " ninety");
				} else {
					
				}
				
				//ones thousand
				if(input[i+1]=='0') {
					//strcat(output, "");
					continue;
				} else if(input[i+1]=='1') {
					strcat(output, " one");
				} else if(input[i+1]=='2') {
					strcat(output, " two");
				} else if(input[i+1]=='3') {
					strcat(output, " three");
				} else if(input[i+1]=='4') {
					strcat(output, " four");
				} else if(input[i+1]=='5') {
					strcat(output, " five");
				} else if(input[i+1]=='6') {
					strcat(output, " six");
				} else if(input[i+1]=='7') {
					strcat(output, " seven");
				} else if(input[i+1]=='8') {
					strcat(output, " eight");
				} else if(input[i+1]=='9') {
					strcat(output, " nine");
				} else {
					
				}
				strcat(output, " thousand");
				digit--;
				i++;
			}
		}
		//ones thousand
		else if(digit == 4) {
			if(input[i]=='0') {
				//strcat(output, "");
				continue;
			} else if(input[i]=='1') {
				strcat(output, " one");
			} else if(input[i]=='2') {
				strcat(output, " two");
			} else if(input[i]=='3') {
				strcat(output, " three");
			} else if(input[i]=='4') {
				strcat(output, " four");
			} else if(input[i]=='5') {
				strcat(output, " five");
			} else if(input[i]=='6') {
				strcat(output, " six");
			} else if(input[i]=='7') {
				strcat(output, " seven");
			} else if(input[i]=='8') {
				strcat(output, " eight");
			} else if(input[i]=='9') {
				strcat(output, " nine");
			} else {
				
			}
			strcat(output, " thousand");
		}

		//hundreds
		else if(digit == 3) {
			if(input[i]=='0') {
				//strcat(output, "");
				break;
			} else if(input[i]=='1') {
				strcat(output, " one");
			} else if(input[i]=='2') {
				strcat(output, " two");
			} else if(input[i]=='3') {
				strcat(output, " three");
			} else if(input[i]=='4') {
				strcat(output, " four");
			} else if(input[i]=='5') {
				strcat(output, " five");
			} else if(input[i]=='6') {
				strcat(output, " six");
			} else if(input[i]=='7') {
				strcat(output, " seven");
			} else if(input[i]=='8') {
				strcat(output, " eight");
			} else if(input[i]=='9') {
				strcat(output, " nine");
			} else {
				
			}
			strcat(output, " hundred");
			
		}//tens and/or ones
		else if(digit == 2) {
			//if 10-19
			if(input[i]=='1') {
				if(input[i+1]=='0') {
					strcat(output, " ten");
				} else if(input[i+1]=='1') {
					strcat(output, " eleven");
				} else if(input[i+1]=='2') {
					strcat(output, " twelve");
				} else if(input[i+1]=='3') {
					strcat(output, " thirteen");
				} else if(input[i+1]=='4') {
					strcat(output, " fourteen");
				} else if(input[i+1]=='5') {
					strcat(output, " fifteen");
				} else if(input[i+1]=='6') {
					strcat(output, " sixteen");
				} else if(input[i+1]=='7') {
					strcat(output, " seventeen");
				} else if(input[i+1]=='8') {
					strcat(output, " eighteen");
				} else if(input[i+1]=='9') {
					strcat(output, " nineteen");
				} else {
				
				}
				digit--; //skip one digit
				i++;
			}
			else {
				//tens
				if(input[i]=='0') {
					//strcat(output, "");
				} else if(input[i]=='2') {
					strcat(output, " twenty");
				} else if(input[i]=='3') {
					strcat(output, " thirty");
				} else if(input[i]=='4') {
					strcat(output, " fourty");
				} else if(input[i]=='5') {
					strcat(output, " fifty");
				} else if(input[i]=='6') {
					strcat(output, " sixty");
				} else if(input[i]=='7') {
					strcat(output, " seventy");
				} else if(input[i]=='8') {
					strcat(output, " eighty");
				} else if(input[i]=='9') {
					strcat(output, " ninety");
				} else {
					
				}
				
				//ones
				if(input[i+1]=='0') {
					//strcat(output], "");
				} else if(input[i+1]=='1') {
					strcat(output, " one");
				} else if(input[i+1]=='2') {
					strcat(output, " two");
				} else if(input[i+1]=='3') {
					strcat(output, " three");
				} else if(input[i+1]=='4') {
					strcat(output, " four");
				} else if(input[i+1]=='5') {
					strcat(output, " five");
				} else if(input[i+1]=='6') {
					strcat(output, " six");
				} else if(input[i+1]=='7') {
					strcat(output, " seven");
				} else if(input[i+1]=='8') {
					strcat(output, " eight");
				} else if(input[i+1]=='9') {
					strcat(output, " nine");
				} else {
					
				}
				digit--;
				i++;
			}
		}
		
		//ones
		else if(digit == 1) {
			if(input[i]=='0') {
				//strcat(output, "");
			} else if(input[i]=='1') {
				strcat(output, " one");
			} else if(input[i]=='2') {
				strcat(output, " two");
			} else if(input[i]=='3') {
				strcat(output, " three");
			} else if(input[i]=='4') {
				strcat(output, " four");
			} else if(input[i]=='5') {
				strcat(output, " five");
			} else if(input[i]=='6') {
				strcat(output, " six");
			} else if(input[i]=='7') {
				strcat(output, " seven");
			} else if(input[i]=='8') {
				strcat(output, " eight");
			} else if(input[i]=='9') {
				strcat(output, " nine");
			} else {
				
			}
		}
	}
	printf("output: %s\n", output);
}


void wordsToNum() {
	char input[200];
	int i;
	char output[10] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
	char word[10] = "\0";
	int wordLen = 0;
	char numStack[10] = "\0";
	int numStackLen = 0; //not actual length but index
	
	printf("input: ");
	fgets(input, 200, stdin);
	input[strlen(input)-1] = '\0';
	
	for(i=0; i<strlen(input); i+=1) {
		//if end of word
		if(input[i]==' '  || input[i]=='\0') {
			//if(strcmp(word,"\0") == 0) { //if end of input
			//	break;
			//} else { //if end of word
				if( strcmp(word, "one")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "two")==0 ) {
					numStack[numStackLen] = '2';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "three")==0 ) {
					numStack[numStackLen] = '3';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "four")==0 ) {
					numStack[numStackLen] = '4';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "five")==0 ) {
					numStack[numStackLen] = '5';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "six")==0 ) {
					numStack[numStackLen] = '3';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "seven")==0 ) {
					numStack[numStackLen] = '7';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "eight")==0 ) {
					numStack[numStackLen] = '8';
					numStack[numStackLen+1] = '\0';
				} else if( strcmp(word, "nine")==0 ) {
					numStack[numStackLen] = '9';
					numStack[numStackLen+1] = '\0';
				}  else if( strcmp(word, "10")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "eleven")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '1';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "twelve")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '2';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "thirteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '3';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "fourteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '4';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "fifteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '5';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "sixteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '6';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "seventeen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '7';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "eighteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '8';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "nineteen")==0 ) {
					numStack[numStackLen] = '1';
					numStack[numStackLen+1] = '9';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "twenty")==0 ) {
					numStack[numStackLen] = '2';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "thirty")==0 ) {
					numStack[numStackLen] = '3';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "forty")==0 ) {
					numStack[numStackLen] = '4';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "fifty")==0 ) {
					numStack[numStackLen] = '5';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "sixty")==0 ) {
					numStack[numStackLen] = '6';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "seventy")==0 ) {
					numStack[numStackLen] = '7';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "eighty")==0 ) {
					numStack[numStackLen] = '8';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "ninety")==0 ) {
					numStack[numStackLen] = '9';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "hundred")==0 ) {
					numStack[numStackLen] = '0';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '\0';
				} else if( strcmp(word, "thousand")==0 ) {
					numStack[numStackLen] = '0';
					numStack[numStackLen+1] = '0';
					numStack[numStackLen+2] = '0';
					numStack[numStackLen+3] = '\0';
				}
				//reset the word
				numStackLen+=1;
				strcpy(word, "\0");
				
				if(strcmp(word,"\0")==0) { //if end of input
					break;
				}
			//}
			continue; 
		}
		else {
			
			word[wordLen] = input[i];
			word[wordLen+1] = '\0';
			wordLen+=1;
			
		}	
	}
	
	
	//printf("wordLen: %d\n", strlen(word));
	
	/*printf("[");
	for(i=0; i<strlen(input); i+=1) {
		printf("%c", input[i]);
	}
	printf("]");
	*/
	//printf("inputLen: %d\n", strlen(input));
	//printf("input: %s\n", input);
	
	printf("output: %s\n", numStack);
}