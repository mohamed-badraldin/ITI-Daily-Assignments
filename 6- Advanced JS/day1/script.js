var LL = {
    date: [],
    create: function (v) {
        return { val: v };
    },
    insert: function (index, obj) {
        this.date[index] = obj;
    },
    push: function (obj) {
        this.date.push(obj);
    },
    pop: function (obj) {
        this.date.pop(obj);
    },
    queue: function (obj) {
        this.date.unshift(obj);
    },
    deQueue: function (obj) {
        this.date.shift(obj);
    },
    delete: function (index) {
        this.date.splice(index, 1);
    },
    deleteAll: function () {
        this.date.splice(0);
    },
    dAll: function () {
        this.date;
    },
};
/*
var ob1 = LL.create(777);
var ob2 = LL.create(888);

LL.insert(0, ob1);
LL.insert(2, ob2);

LL.deleteAll();

console.log(LL.date);
*/


