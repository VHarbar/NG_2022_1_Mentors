
function ChangeText() {
    document.getElementById('demo').innerHTML="Javascript is cool"
}

function ChangeImage() {
    var image = document.getElementById('myImage');
    if (image.src.match("bulbon")) {
        console.log("it just work");
        image.src = "img/pic_bulboff.gif";
    }else
       {
        image.src = "img/pic_bulbon.gif";
        }
    }
