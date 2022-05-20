
function setup() {
    initializeFields();
    createCanvas(400, 300);
    textSize(40);
}

var choice;

function draw() {
    background(color(0xDF, 0xEA, 0x45));
    fill(color(0x45, 0x6F, 0xEA));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    text("noodle", 50, 50);
    text("rice", 50, 100);
    text("chicken 3", 50, 150);
}

function mousePressed() {
    choice = int(random(3));
// choice = (choice + 1) % 3;
}

function initializeFields() {
    choice = -1;
}
