const p=new Promise(function(resolve,reject){
  
      reject();
    //resolve();
  });
  p.then(function(){
    console.log("Promise is fulfilled");
  },function(){
      console.log("Promise is rejected");
  }).catch(()=>{
      console.log("Inside catch");
  });





  
  






