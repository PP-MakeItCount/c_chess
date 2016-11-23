void border()
{
	outtextxy(50,50,z);

	z[0]=187;
	outtextxy(100,50,z);
	z[0]=200;
	outtextxy(50,100,z);
	z[0]=188;
	outtextxy(100,100,z);

	z[0]=205;
	for(i=57;i<93;i+=7)
	{ outtextxy(i,50,z);
	 outtextxy(i,100,z);}

	z[0]=186;
	for(i=57;i<93;i+=7)
	{ outtextxy(50,i,z);
	 outtextxy(100,i,z);}

}