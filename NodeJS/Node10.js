const p1= new Promise((resolve,reject)=>{
      //resolve("Hello");
      reject("Hello Guys")
      
});
p1.then((resolvedData)=>{
 console.log(resolvedData);

},(rejectedData)=>{
    console.log(rejectedData);
}).catch();


