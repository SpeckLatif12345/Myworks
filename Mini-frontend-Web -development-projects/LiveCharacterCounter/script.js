const textArea = document.querySelector("textArea");
const counter = document.querySelector(".counter");

function CountingCharacters() 
{
   
   const textAreaLength = textArea.value.length;
   counter.innerText = `${textAreaLength}`;



}