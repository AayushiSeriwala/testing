console.log("At the top");
const firstName=()=>{
   console.log("First Name");
    return new Promise((resolve,reject)=>{
    setTimeout(()=>{
       resolve("Merry");
    },1000);

   });
}
  const middleName=()=>{
     console.log("Middle Name");
     return new Promise((resolve,reject)=>{
      setTimeout(()=>{
        resolve ("Thomas");
      },2000);

     });
  }
  
  const lastName=()=>{
    console.log("Last Name");
    return new Promise((resolve,reject)=>{
     setTimeout(()=>{
        resolve("Alexan");
     },1500);
    });
  }      
Promise.race([firstName(),middleName(),lastName()])
 .then((resolveData)=>{
     console.log("Resolved call back:"+resolveData);
 },(rejectedData)=>{
    console.log("Reject call back"+rejectedData);
 })
 .catch();
  console.log("At the End");
