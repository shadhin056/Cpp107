#include <iostream>
#include <string>
#define N 100
#define password 12456
using namespace std;

int total_car;//like count
class car_showroom
{
    public:
	char car_name[N];
	char body_style[N];
	char drive_line[N];
	char transmission[N];
	char exterior_color[N];
	char interior_color[N];
	char vin[N];
	char car_model[N];
	char car_country_made[N];
    int mileage;
    int car_price;
    int downpayment;
	int monthly_pay;
	int city_MPG;
	int HWY_MPG;
	int stock;

};

class car_management:public car_showroom
{
public:
	car_showroom store[N];
	void adding();
	void display_all();
	void removing();
	void save();
	void search();
	void buy();
	car_management()
	{
		FILE *tc;
		tc = fopen("Total Car.txt","r");
		fscanf(tc,"%d",&total_car);
		cout<<total_car<<endl;
		fclose(tc);
		int i;
		FILE *aa;
		aa = fopen("Cars Name.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(aa,"%s",&store[i].car_name);
		}
		fclose(aa);
		FILE *bb;
		bb=fopen("Cars bodystyle.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(bb,"%s",&store[i].body_style);
		}
		fclose(bb);
		FILE *dd;
		dd = fopen("Cars drive line.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(dd,"%s",&store[i].drive_line);
		}
		fclose(dd);
		FILE *ee;
		ee = fopen("Cars transmission.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(ee,"%s",&store[i].transmission);
		}
		fclose(ee);
		FILE *ff;
		ff = fopen("Cars exterior color.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(ff,"%s",&store[i].exterior_color);
		}
		fclose(ff);

		FILE *gg;
		gg = fopen("Cars interior color.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(gg,"%s",&store[i].interior_color);
		}
		fclose(gg);
		FILE *hh;
		hh = fopen("Cars vin.txt","r");
		for( i=0;i<total_car;i++)
		{
			fscanf(hh,"%s",&store[i].vin);
		}
		fclose(hh);
        FILE *ii;
		ii = fopen("Cars model.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(ii,"%s",&store[i].car_model);
		}
		fclose(ii);
		FILE *jj;
		jj = fopen("Cars country made.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(jj,"%s",&store[i].car_country_made);
		}
		fclose(jj);
		FILE *ll;
		ll = fopen("Cars mileage.txt","r");
		for( i=0;i<total_car;i++)
		{
			fscanf(ll,"%d",&store[i].mileage);
		}
		fclose(ll);
		FILE *mm;
		mm = fopen("Cars price.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(mm,"%d",&store[i].car_price);
		}
		fclose(mm);

		FILE *nn;
		nn = fopen("Cars downpayment.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(nn,"%d",&store[i].downpayment);
		}
		fclose(nn);
		FILE *oo;
		oo = fopen("Cars monthly pay.txt","r");
		for( i=0;i<total_car;i++)
		{
			fscanf(oo,"%d",&store[i].monthly_pay);
		}
		fclose(oo);
        FILE *pp;
		pp = fopen("Cars city MPG.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(pp,"%d",&store[i].city_MPG);
		}
		fclose(pp);

		FILE *qq;
		qq = fopen("Cars HWY MPG.txt","r");
		for(i=0;i<total_car;i++)
		{
			fscanf(qq,"%d",&store[i].HWY_MPG);
		}
		fclose(qq);
		FILE *rr;
		rr = fopen("Cars stock.txt","r");
		for( i=0;i<total_car;i++)
		{
			fscanf(rr,"%d",&store[i].stock);
		}
		fclose(rr);
	}
};

void car_management::adding()
{
	cout<<"Give name: ";
	cin.getline(store[total_car].car_name,N);
	cout<<"Give body style: ";
	cin.getline(store[total_car].body_style,N);
	cout<<"Give drive line: ";
	cin.getline(store[total_car].drive_line,N);
    cout<<"Give transmission: ";
	cin.getline(store[total_car].transmission,N);
	cout<<"Give exterior color: ";
	cin.getline(store[total_car].exterior_color,N);	
	cout<<"Give interior color: ";
	cin.getline(store[total_car].interior_color,N);	
	cout<<"Give vin: ";
	cin.getline(store[total_car].vin,N);
	cout<<"Give car model: ";
	cin.getline(store[total_car].car_model,N);	
	cout<<"Give country name: ";
	cin.getline(store[total_car].car_country_made,N);	
	getchar();
	cout<<"Give mileage: ";
	cin>>store[total_car].mileage;
	cout<<"Give car price: ";
	cin>>store[total_car].car_price;
	cout<<"Give the amount of downpayment: ";
	cin>>store[total_car].downpayment;
	cout<<"Give the amount of maonthly payment: ";
	cin>>store[total_car].monthly_pay;
	cout<<"Give city MPG: ";
	cin>>store[total_car].city_MPG;
	cout<<"Give high way MPG: ";
	cin>>store[total_car].HWY_MPG;
	cout<<"Give car stock: ";
	cin>>store[total_car].stock;
	total_car++;

}

void car_management::display_all()
{
	cout<<total_car;
	for(int i=0;i<total_car;i++)
	{
		
		cout<<"-----------car "<<i+1<<"--------------\n";
        cout<<"|    Car name: ";
		cout<<store[i].car_name<<endl;

		cout<<"|    Car body style: ";
		cout<<store[i].body_style<<endl;


		cout<<"|    Car drive line: ";
		cout<<store[i].drive_line<<endl;
		cout<<"|    Car transmission: ";
		cout<<store[i].transmission<<endl;

		cout<<"|    Car exterior color: ";
		cout<<store[i].exterior_color<<endl;

		cout<<"|    Car interior color: ";
		cout<<store[i].interior_color<<endl;

		cout<<"|    Car vin: ";
		cout<<store[i].vin<<endl;
		cout<<"|    Car model: ";
		cout<<store[i].car_model<<endl;

		cout<<"|    Car country made: ";
		cout<<store[i].car_country_made<<endl;

		cout<<"|    Car mileage: ";
		cout<<store[i].mileage<<endl;
		cout<<"|    Car price: ";
		cout<<store[i].car_price<<endl;

		cout<<"|    Car downpayment: ";
		cout<<store[i].downpayment<<endl;

		cout<<"|    Car monthly payment: ";
		cout<<store[i].monthly_pay<<endl;

		cout<<"|    Car city MPG: ";
		cout<<store[i].city_MPG<<endl;
        cout<<"|    Car HWY MPG: ";
		cout<<store[i].HWY_MPG<<endl;
		cout<<"|    Number of available : ";
		cout<<store[i].stock<<endl;
		
		
		cout<<"-------------------------------\n\n";
	}
}
void car_management::removing()
{
	printf("Press 1 for delete all and 2 for delete 1 car\n");
	int s;
	scanf("%d",&s);
	getchar();
	if(s==1)total_car=0;
	else
	{
		char carname[N];
		cout<<"Give name to remove: ";
		cin>>carname;
		for(int i=0;i<total_car;i++)
		{
			if(strcmp(carname,store[i].car_name)==0)
			{
				break;
			}
		}
		for(int j=i+1;j<total_car;j++)
			store[j-1]=store[j];
		total_car--;
	}
}
void car_management::search()
{
	char carname[N];
	cout<<"Give name for search: ";
	cin.getline(carname,N);
	for(int i=0;i<total_car;i++)
	{
		if(strcmp(carname,store[i].car_name)==0)
		{
		cout<<"-----------car "<<i+1<<"--------------\n";
        cout<<"|    Car name: ";
		cout<<store[i].car_name<<endl;

		cout<<"|    Car body style: ";
		cout<<store[i].body_style<<endl;


		cout<<"|    Car drive line: ";
		cout<<store[i].drive_line<<endl;
		cout<<"|    Car transmission: ";
		cout<<store[i].transmission<<endl;

		cout<<"|    Car exterior color: ";
		cout<<store[i].exterior_color<<endl;

		cout<<"|    Car interior color: ";
		cout<<store[i].interior_color<<endl;

		cout<<"|    Car vin: ";
		cout<<store[i].vin<<endl;
		cout<<"|    Car model: ";
		cout<<store[i].car_model<<endl;

		cout<<"|    Car country made: ";
		cout<<store[i].car_country_made<<endl;


		cout<<"|    Car mileage: ";
		cout<<store[i].mileage<<endl;
		cout<<"|    Car price: ";
		cout<<store[i].car_price<<endl;

		cout<<"|    Car downpayment: ";
		cout<<store[i].downpayment<<endl;

		cout<<"|    Car monthly payment: ";
		cout<<store[i].monthly_pay<<endl;

		cout<<"|    Car city MPG: ";
		cout<<store[i].city_MPG<<endl;
        cout<<"|    Car HWY MPG: ";
		cout<<store[i].HWY_MPG;
		cout<<"|    Number of available : ";
		cout<<store[i].stock<<endl;
		cout<<"|    Car country made: ";
		cout<<store[i].car_country_made<<endl;
		
			

		cout<<"-------------------------------\n\n";
		}
	}
}

void car_management::buy()
{
	char carname[N],car_model[N];
	int num,have=0;
	cout<<"Give name for buy: ";
	cin.getline(carname,N);
	cout<<"Give model for "<<carname<<" : ";
	cin.getline(car_model,N);
	for(int i=0;i<total_car;i++)
	{
		if(strcmp(carname,store[i].car_name)==0 && strcmp(car_model,store[i].car_model)==0  )
		{
		have=1;
		cout<<"-----------car "<<i+1<<"--------------\n";
        cout<<"|    Car name: ";
		cout<<store[i].car_name<<endl;

		cout<<"|    Car body style: ";
		cout<<store[i].body_style<<endl;


		cout<<"|    Car drive line: ";
		cout<<store[i].drive_line<<endl;
		cout<<"|    Car transmission: ";
		cout<<store[i].transmission<<endl;

		cout<<"|    Car exterior color: ";
		cout<<store[i].exterior_color<<endl;

		cout<<"|    Car interior color: ";
		cout<<store[i].interior_color<<endl;

		cout<<"|    Car vin: ";
		cout<<store[i].vin<<endl;
		cout<<"|    Car model: ";
		cout<<store[i].car_model<<endl;

		cout<<"|    Car country made: ";
		cout<<store[i].car_country_made<<endl;


		cout<<"|    Car mileage: ";
		cout<<store[i].mileage<<endl;
		cout<<"|    Car price: ";
		cout<<store[i].car_price<<endl;

		cout<<"|    Car downpayment: ";
		cout<<store[i].downpayment<<endl;

		cout<<"|    Car monthly payment: ";
		cout<<store[i].monthly_pay<<endl;

		cout<<"|    Car city MPG: ";
		cout<<store[i].city_MPG<<endl;
        cout<<"|    Car HWY MPG: ";
		cout<<store[i].HWY_MPG;
		cout<<"|    Number of available : ";
		cout<<store[i].stock<<endl;
		
			cout<<"-------------------------------\n\n";
			cout<<"How many car do you want to buy: ";
			cin>>num;
			if(num<=store[i].stock)
			{

				cout<<"Total money : ";
				cout<<num*store[i].car_price;
				cout<<" \nThanks for buying\n";
				store[i].stock-=num;
			}
			else
				cout<<"Do not have enough stock"<<endl;
		}
	}
	if(have==0)
		cout<<"We do not have the car\n";

}

void car_management::save()
{
	int i;
	FILE *tc;
	tc = fopen("Total Car.txt","w");
	fprintf(tc,"%d\n",total_car);
	fclose(tc);
	FILE *aa;
	aa = fopen("Cars Name.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(aa,"%s\n",store[i].car_name);
	}
	 fclose(aa);
    FILE *bb;
	bb=fopen("Cars bodystyle.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(bb,"%s\n",store[i].body_style);
		}
	fclose(bb);
	FILE *cc;
	cc=fopen("Cars engine.txt","w");
	FILE *dd;
	dd = fopen("Cars drive line.txt","w");
	for(i=0;i<total_car;i++)
	{
			fprintf(dd,"%s\n",store[i].drive_line);
	}
	fclose(dd);
	FILE *ee;
	ee = fopen("Cars transmission.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(ee,"%s\n",store[i].transmission);
	}
	fclose(ee);
	FILE *ff;
	ff = fopen("Cars exterior color.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(ff,"%s\n",store[i].exterior_color);
	}
	fclose(ff);
    FILE *gg;
	gg = fopen("Cars interior color.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(gg,"%s\n",store[i].interior_color);
	}
	fclose(gg);
	FILE *hh;
	hh = fopen("Cars vin.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(hh,"%s\n",store[i].vin);
	}
	fclose(hh);
     FILE *ii;
	ii = fopen("Cars model.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(ii,"%s\n",store[i].car_model);
	}
	fclose(ii);
	FILE *jj;
	jj = fopen("Cars country made.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(jj,"%s\n",store[i].car_country_made);
	}
	fclose(jj);
	FILE *ll;
	ll = fopen("Cars mileage.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(ll,"%d\n",store[i].mileage);
	}
	fclose(ll);
	FILE *mm;
	mm = fopen("Cars price.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(mm,"%d\n",store[i].car_price);
	}
	fclose(mm);
    FILE *nn;
	nn = fopen("Cars downpayment.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(nn,"%d\n",store[i].downpayment);
	}
	fclose(nn);
	FILE *oo;
	oo = fopen("Cars monthly pay.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(oo,"%d\n",store[i].monthly_pay);
	}
	fclose(oo);
    FILE *pp;
	pp = fopen("Cars city MPG.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(pp,"%d\n",store[i].city_MPG);
	}
	fclose(pp);
    FILE *qq;
	qq = fopen("Cars HWY MPG.txt","w");
	for(i=0;i<total_car;i++)
	{
	fprintf(qq,"%d\n",store[i].HWY_MPG);
	}
	fclose(qq);
	FILE *rr;
	rr = fopen("Cars stock.txt","w");
	for( i=0;i<total_car;i++)
	{
	fprintf(rr,"%d\n",store[i].stock);
	}
	fclose(rr);
}
int main()
{
	int x,pass;
	car_management car;
	while(1)
	{	cout<<"enter your choice"<<endl;
		cout<<"._________. .___________. .___________. ._________. ._________. .__________.   \n";
		cout<<"|         | |           | |           | |         | |         | |          |   \n";
		cout<<"| Press 1 | |  Press 2  | |  Press 3  | | Press 4 | | Press 5 | | press 6  |   \n";
		cout<<"|   for   | |    for    | |for showing| |  for    | |  for    | |   for    |   \n";
		cout<<"|   Add   | |  delete   | |  all car  | | search  | |  buy    | |   exit   |   \n";
		cout<<"|_________| |___________| |___________| |_________| |_________| |__________|   \n";
		cin>>x;
		getchar();
		if(x==1)
		{
			cout<<"Give password: "<<endl;
			cin>>pass;
			getchar();
		    if(password==pass)
				car.adding();
			else
				cout<<"Wrong password try again..."<<endl;
		}
		else if(x==2)
		{
			cout<<"Give password: ";
			cin>>pass;
			getchar();
			if(password==pass)
		   car.removing();
			else
				cout<<"Wrong password try again..."<<endl;
		}
		else if(x==3)
		{
			car.display_all();
		}
		else if(x==4)
		{
			car.search();
		}
		 else if(x==5)
		{
			car.buy();
		}
		 else if(x==6)
		 {
			 break;
		 }
	}

	car.save();

	return 0;
}