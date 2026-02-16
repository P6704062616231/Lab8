int main() {
    int i,j;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},
        	{'D','B','A','B','C','A','E','E','A','D'},
        	{'E','D','D','A','C','B','E','E','A','D'},
        	{'C','B','A','E','D','C','E','E','A','D'},
        	{'A','B','D','C','C','D','E','E','A','D'},
        	{'B','B','E','C','C','D','E','E','A','D'},
        	{'B','B','A','C','C','D','E','E','A','D'},
        	{'E','B','E','C','C','D','E','E','A','D'}};
        	{'A','B','A','C','C','D','E','E','A','D'},//7
			{'D','B','A','B','C','A','E','E','A','D'},//6
			{'E','D','D','A','C','B','E','E','A','D'},//5
			{'C','B','A','E','D','C','E','E','A','D'},//4
			{'A','B','D','C','C','D','E','E','A','D'},//8
			{'B','B','E','C','C','D','E','E','A','D'},//7
			{'B','B','A','C','C','D','E','E','A','D'},//7
			{'E','B','E','C','C','D','E','E','A','D'}};//7


   	for(i=0;i<8;i++){
   		printf("std %d => %d\n", (i+1), checkscore(ans[i]));
	   }

	printf("Number of students correct in question 1 = %d\n",
       countCorrectQ1(ans, 8));
    return 0;
}

@@ -33,3 +33,12 @@ int checkscore(char std[]){
    }
    return score;
}
int countCorrectQ1(char ans[][10],int students){
    int count=0;
    int i;
    for(i=0; i<students;i++){
        if(ans[i][0]==charkeys[0])
            count++;
    }
    return count;
}
