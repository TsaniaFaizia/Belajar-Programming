//Validasi Username
function usernameValidity(username)
{
    var userRegExp = /^[a-z]{1}[0-9a-z._]{7,11}$/;
    return userRegExp.test(username); 
} 
 
//Validasi Password
function passwordValidity(password) 
{
    var passRegExp = /^[0-9a-zA-Z#,.<>+()/[{}|~`^;_'@":=$!%*?&]{2,9}$/;
    return passRegExp.test(password);
}

//Contoh 1
if (usernameValidity("john.smith"))
{
    print("Username is valid \n") ;
} 
else
{
    print("Username is invalid \n") ;
}

//Contoh 2
if (usernameValidity("johnsmith26"))
{
    print("Username is valid \n") ;
} 
else
{
    print("Username is invalid \n") ;
}

//Contoh 3
if (usernameValidity("JOHNSmith"))
{
    print("Username is valid \n") ;
} 
else
{
    print("Username is invalid \n") ;
}

//Contoh 4
if (passwordValidity("j0hn5m!th"))
{
    print("Password is valid \n") ;
} 
else 
{
    print("Password is invalid \n") ;
}
