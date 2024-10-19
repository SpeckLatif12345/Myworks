const pressButton=document.querySelectorAll(".btn-counter");
let counter=document.querySelector(".count-number");
let counterContainer=document.querySelector(".counter");
let count=0;
pressButton.forEach( (pressButton)=>pressButton.addEventListener("click",function(){
      
    if(pressButton.classList.contains("increase")     )
    {
        count++;
    }

    else if(pressButton.classList.contains("decrease") )
    {
        count--;
    }

    counter.textContent=count;

    if(count > 0 )
        
    {    
        
        
         counterContainer.classList.remove("negative");
        counterContainer.classList.add("positive");

    }

    else if(count < 0)
    {       
        counterContainer.classList.remove("positive");
        counterContainer.classList.add("negative");
    } 

    else
    {
        counterContainer.classList.remove("positive","negative");
    }





}) )
