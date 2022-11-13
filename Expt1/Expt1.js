// Name: Prathmesh Bonde
// Roll no: 42115

function Areaofcircle() {
    var rad = parseInt(document.getElementById("radius").value);
    var area = Math.PI * rad * rad;
    document.getElementById("displayc").innerHTML = area;
}
function AreaofRectangle() {
    var len = parseInt(document.getElementById("length").value);
    var brd = parseInt(document.getElementById("breadth").value);
    var area = len * brd;
    document.getElementById("displayr").innerHTML = area;
}
function AreaofTriangle() {
    var s1 = parseInt(document.getElementById("side1").value);
    var s2 = parseInt(document.getElementById("side2").value);
    var s3 = parseInt(document.getElementById("side3").value);
    var s = (s1 + s2 + s3) / 2;
    var area = Math.sqrt(s * (s - s1) * (s - s2) * (s - s3));
    document.getElementById("displayt").innerHTML = area;
}