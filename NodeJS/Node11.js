const FirstName=()=>{
   return new Promise((resolve,reject)=>{
       setTimeout(()=>{
         resolve("Marry");
       },3000)
    });
}
 const MiddleName=()=>{
   return new Promise((resolve,reject)=>{
    setTimeout(()=>{
      resolve("Thoman");
    },2000);
   });
 }
  const LastName=()=>{
     return new Promise((resolve,reject)=>{
      setTimeout(()=>{
       resolve ("Alexan");
      },500);
      
     })
  }
  Promise.all([FirstName(),MiddleName(),LastName()])
 .then((resolvedData)=>{
    console.log(resolvedData[0]+" "+resolvedData[1]+" "+resolvedData[2]);
 },(rejectedData)=>{
     console.log (rejectedData);
 })
 .catch();
 






  