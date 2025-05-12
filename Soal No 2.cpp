#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
	char location[21];
	char city[21];
	char price[21];
	char rooms[21];
	char bathroom[21];
	char carpark[21];
	char type[21];
	char furnish[21];
	
};

void DisplayData(FILE*file)
{
	int row;
	printf("Number of rows: ");
	scanf("%d",&row);
	getchar();

	char kalimat[101];
	int hitung=0;
	
	while(fgets(kalimat,sizeof(kalimat),file))
	{
		hitung++;
		char*token=strtok(kalimat,";");
	
		while (token !=NULL)
		{
			printf("%-15s ",token);
			token=strtok(NULL,";");
		}
		
		if(hitung>=row+1)
		{
			break;
		}
		printf("\n");
	}
}

void SearchData(FILE*file)
{
	char kategori[101];
	
	printf("Choose column: ");
	scanf("%[^\n]",kategori);
	getchar();
	
	char search[101];
	
	printf("What data do you want to find? ");
	scanf("%[^\n]",search);
	getchar();
	
	char kalimat[101];
	
	struct data data1[10001];
	
	for(int i=0;i<3940;i++)
	{
	fscanf(file,"%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
	}
	
	int u=0;
	
	if(strcmp(kategori,data1[0].location)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].location,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].city)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].city,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].bathroom)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].bathroom,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].carpark)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].carpark,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].furnish)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].furnish,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].price)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].price,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].rooms)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].rooms,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
	if(strcmp(kategori,data1[0].type)==0)
	{
	
		for(int i=0;i<3940;i++)
		{
			if(strcmp(data1[i].type,search)==0)
			{
				if(u==0)
				{
					
					printf("Data Found. Detail of data:\n");
				 	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
				}
				printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
				u=1;
			}
		}
		if(u==0)
		{
			
			printf("Data not found!");
		}
	}
}

void SortData(FILE*file)
{
	char kategori[21];
	printf("Choose column: ");
	scanf("%[^\n]",kategori);
	getchar();
	
	char pilih[21];
	printf("Sort ascending or descending? ");
	scanf("%[^\n]",pilih);
	getchar();
	
	
	struct data data1[10001];
	
	for(int i=0;i<3940;i++)
	{
	fscanf(file,"%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",data1[i].location,data1[i].city,data1[i].price,data1[i].rooms,data1[i].bathroom,data1[i].carpark,data1[i].type,data1[i].furnish);
	}
	
	int harga[3940];
	int kamar[3940];
	int mandi[3940];
	int carpark[3940];
	
	printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",data1[0].location,data1[0].city,data1[0].price,data1[0].rooms,data1[0].bathroom,data1[0].carpark,data1[0].type,data1[0].furnish);
	
	for(int i=1;i<3940;i++)
	{
		harga[i]= atoi(data1[i].price);
		kamar[i]=atoi (data1[i].rooms);
		mandi[i]= atoi(data1[i].bathroom);
		carpark[i]= atoi (data1[i].carpark);
	}
	
	char templocation1[21];
	char templocation2[21];
	char temptype[21];
	char tempfurnish[21];
	
	int tempkamar;
	int tempmandi;
	int tempcarpark;
	int tempharga;
	
	if(strcmp(kategori,data1[0].price)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(harga[j]>harga[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(harga[j]<harga[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].bathroom)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(mandi[j]>mandi[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(mandi[j]<mandi[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].carpark)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(carpark[j]>carpark[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(carpark[j]<carpark[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}

	if(strcmp(kategori,data1[0].rooms)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(kamar[j]>kamar[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(kamar[j]<kamar[j+1])
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].location)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].location,data1[j+1].location)>0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].location,data1[j+1].location)<0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].city)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].city,data1[j+1].city)>0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].city,data1[j+1].city)<0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].type)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].type,data1[j+1].type)>0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].type,data1[j+1].type)<0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}
	if(strcmp(kategori,data1[0].furnish)==0)
	{	
	
		if(strcmp(pilih,"asc")==0)
		{
		
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].furnish,data1[j+1].furnish)>0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}
		else
		{
			for(int i=1;i<3939-1;i++)
			{
				for(int j=1;j<3939-i-1;j++)
				{
					if(strcmp(data1[j].furnish,data1[j+1].furnish)<0)
					{
						tempkamar=kamar[j];
						kamar[j]=kamar[j+1];
						kamar[j+1]=tempkamar;
						
						tempmandi=mandi[j];
						mandi[j]=mandi[j+1];
						mandi[j+1]=tempmandi;
						
						tempcarpark=carpark[j];
						carpark[j]=carpark[j+1];
						carpark[j+1]=tempcarpark;
						
						tempharga=harga[j];
						harga[j]=harga[j+1];
						harga[j+1]=tempharga;
						
						strcpy(templocation2, data1[j].city);
						strcpy(data1[j].city,data1[j+1].city);
						strcpy(data1[j+1].city,templocation2);
						
						strcpy(temptype , data1[j].type);
						strcpy(data1[j].type,data1[j+1].type);
						strcpy(data1[j+1].type,temptype);						

						strcpy(tempfurnish , data1[j].furnish);
						strcpy(data1[j].furnish,data1[j+1].furnish);
						strcpy(data1[j+1].furnish,tempfurnish);
						
						strcpy(templocation1 , data1[j].location);
						strcpy(data1[j].location,data1[j+1].location);
						strcpy(data1[j+1].location,templocation1);							
					}
				}
			}
			for(int i=1;i<=10;i++)
			{
			printf("%-15s %-15s %-15d %-15d %-15d %-15d %-15s %-15s\n",data1[i].location,data1[i].city,harga[i],kamar[i],mandi[i],carpark[i],data1[i].type,data1[i].furnish);
			}
		}		
	}	
}

void ExportData(FILE *file)
{
	char filebaru[21];
	printf("File Name: ");
	scanf("%[^\n]",filebaru);
	
	strcat(filebaru,".csv");
	
	FILE*file1;
	file1=fopen("filebaru.csv","r");
	
	
	struct data data1; 
	
	while(!feof(file))
	{
	
	fscanf(file,"%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",data1.location,data1.city,data1.price,data1.rooms,data1.bathroom,data1.carpark,data1.type,data1.furnish);
	fprintf(file1,"%s;%s;%s;%s;%s;%s\n", data1.location,data1.city,data1.price,data1.rooms,data1.bathroom,data1.carpark,data1.type,data1.furnish);
	}
	
	fclose(file);
	fclose(file1);
	
	printf("Data successfully written to file %s!\n",filebaru);
	
}

int main()
{
	printf("What do you want to do?\n");
	printf("1. Display data\n");
	printf("2. Search Data\n");
	printf("3. Sort Data\n");
	printf("4. Export Data\n");
	printf("5. Exit\n");
	printf("Your choice: ");
	
	int a;
	scanf("%d",&a);
	getchar();
	
	
	
	
	FILE*file;
	file=fopen("file.csv","r");
	

	
	
	if(a==1)
	{
		DisplayData(file);
	}
	else if(a==2)
	{
		SearchData(file);
	}
	else if(a==3)
	{
		SortData(file);
	}
	else if(a==4)
	{
		ExportData(file);
	}
	else if(a==5)
	{
		return 0;
	}

	
	fclose(file);
	return 0;
	
}
