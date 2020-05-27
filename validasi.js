//Validasi Username
function usernameCheck(username)
{
    var userRegExp = /^[@]{1}[a-z0-9]{1,11}$/i;
    return userRegExp.test(username); 
} 
 
//Validasi Password
function passwordCheck(password) 
{
    var passRegExp = /^[0-9]{6,6}$/i;
    return passRegExp.test(password);
}

//Contoh 1
if (usernameCheck("@koders"))
{
    print("Username is valid \n") ;
} 
else
{
    print("Username is invalid \n") ;
}

//Contoh 2
if (usernameCheck("@programmerhandal"))
{
    print("Username is valid \n") ;
} 
else
{
    print("Username is invalid \n") ;
}

//Contoh 3
if (passwordCheck("212223"))
{
    print("Password is valid \n") ;
} 
else
{
    print("Password is invalid \n") ;
}

//Contoh 4
if (passwordCheck("2!2a3B"))
{
    print("Password is valid \n") ;
} 
else 
{
    print("Password is invalid \n") ;
}