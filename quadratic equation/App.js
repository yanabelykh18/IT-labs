alert("Квадратное уравнение ax^2+bx+c");
var a = prompt ("Введите коэффициент a", " ");
var b = prompt ("Введите коэффициент b", " ");
var c = prompt ("Введите коэффициент c", " ");
D = (b*b)-(4*a*c);
if (c != 0 && a != 0 && b != 0)
{	
if (D > 0)
		{
			res1 = (-b + Math.sqrt(D))/2*a;
			res2 = (-b - Math.sqrt(D))/2*a;
			document.write("x1 = ",res1 );
			document.write("x2 = ",res2 );;
		}
	else if (D == 0)
		{
			res1 = (-b/2*a);
			document.write("x1 = ",res1 );
		}
	else if (D < 0)
		{
			D = Math.abs(D);
			res1 = miss*b + "/" + 2*a + "+" + D**(1/2) + "*i" + "/" + 2*a;
			res2 = miss*b + "/" + 2*a + "-" + D**(1/2) + "*i" + "/" + 2*a;
			document.write("x1 = ",res1 );
			document.write(" x2 = ",res2 );
		}
}

 if (c == 0)
{
	if (D > 0)
		{
			res1 = (-b + Math.sqrt(D))/2*a;
			res2 = (-b - Math.sqrt(D))/2*a;
			document.write("x1 = ",res1 );
			document.write(" x2 = ",res2 );
		}
	else if (D == 0)
		{
			res1 = (-b/2*a);
			document.write("x1 = ",res1 );
		}
	else if (D < 0)
		{
			D = Math.abs(D);
			res1 = miss*b + "/" + 2*a + "+" + D**(1/2) + "*i" + "/" + 2*a;
			res2 = miss*b + "/" + 2*a + "-" + D**(1/2) + "*i" + "/" + 2*a;
			document.write("x1 = ",res1 );
			document.write(" x2 = ",res2 );
    }
}

 if (a == 0 && b !=0 && c != 0)
{
	x = -c / b;
}

if (a != 0 && b == 0 && c != 0)
{	if (c < 0)
		x = Math.sqrt(-c / a);
	else
		{
			x = "("+"i^2*" +  c +"/"+ a+")"+"^(1/2)";
		}
		document.write("x1 = ",x ); 
		document.write(" x2 = -",x );
}
