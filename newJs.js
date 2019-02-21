const lorem = {ipsum:1};

var output = (function(){
    lorem.ipsum = "2"
    delete lorem.ipsum;
    return lorem.ipsum;
})();

console.log(output)