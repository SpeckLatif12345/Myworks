const form  = document.getElementById("form")
const username = document.getElementById("username")
const email = document.getElementById("email")
const password = document.getElementById("password")
const passwordCheck = document.getElementById("passwordCheck")

form.addEventListener("submit",function(e){
e.preventDefault();
CheckInput();

});

function CheckInput()
{

const usernameValue = username.value.trim();
const emailValue = email.value.trim();
const passwordValue = password.value.trim();
const passwordCheckValue= passwordCheck.value.trim()

if(usernameValue === "")
{
  SetErrorFor(username,"Username cannot be empty");
}

else
{
    SetSuccessFor(username);
}

if(emailValue === "")
{
  SetErrorFor(email,"Email Cannot be Empty");
}

else if(!isEmail(emailValue))
{
  SetErrorFor(email,"Enter a Valid Email");
}
else
{
  SetSuccessFor(email);
}

if(passwordValue === "")
  {
    SetErrorFor(password,"password  cannot be empty");
  }
  
  else
  {
      SetSuccessFor(password);
  }

  if(passwordCheckValue === "")
    {
      SetErrorFor(passwordCheck,"PasswordCheck  cannot be empty");
    }
    
    else if(passwordCheckValue !== passwordValue)
    {
        SetErrorFor(passwordCheck,"Password Does Not Match");
          }

    else
    {
      SetSuccessFor(passwordCheck);
    }





}


function SetErrorFor(input,message)
{
const controlForm = input.parentElement;
const small = controlForm.querySelector(".error");
controlForm.className = "control-form fail";
small.innerText  = message;



}

function SetSuccessFor(input)
{
 const controlForm = input.parentElement;
 controlForm.className = "control-form Success";


}


function isEmail(email)
{
  return /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/.test(email);


}