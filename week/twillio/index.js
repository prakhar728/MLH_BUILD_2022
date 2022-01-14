// Download the helper library from https://www.twilio.com/docs/node/install
// Find your Account SID and Auth Token at twilio.com/console
// and set the environment variables. See http://twil.io/secure
const express = require('express')
const app = express();
const dotenv = require('dotenv');
dotenv.config();
app.use(express.json());
app.use(express.urlencoded({extended:true}));
const accountSid = process.env.TWILIO_ACCOUNT_SID;
const authToken = process.env.TWILIO_AUTH_TOKEN;
const client = require('twilio')(accountSid, authToken);

const PORT = process.env.PORT || 3000;
app.post('/',(req,res)=>{
    console.log(req.body.messageBody,);
    client.messages
  .create({
     body: req.body.messageBody,
     from: '+16154995410',
     to: req.body.toNumber
   })
  .then(message => console.log(message.sid))
  .catch(err=>console.log(err))
})

app.listen(PORT,()=>{
    console.log( `The Server is live on ${PORT}`);
})