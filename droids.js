let host = {
    name: 'Roget',
    occupation: 'creator of Roget\'s Thesaurus',
    saySpecs() {return `My name is ${this.name}. My occupation is ${this.occupation}.`}
}

// console.log(host);
// console.log(host.saySpecs());

class BasicHost {
    constructor(name, occupation) {
        this.name=name;
        this.occupation=occupation;
    }
    saySpecs() {return `My name is ${this.name}. My occupation is ${this.occupation}.`}
}

const host1 = new BasicHost("Roget", "creator of Roget's Thesaurus");

// console.log(host1);
// console.log(host1.saySpecs());

const host2 = new BasicHost("Lily", "mechanic");

// console.log(host2);
// console.log(host2.saySpecs());

const names = [
			       "Laila", "Jack", "Harley", "Hertha", "Darren", "Jolene", 
             "Loura", "Lona", "Davida", "Reena", "Leland", "Ta", "Jen", 
             "Linn", "Roslyn", "Margorie", "Rafaela", "Romona", "Shanel", "Stan"
];

const occupations = [
					         "Clerical assistant", "Leaflet distributor", "Landowner",
                   "Special constable", "Anaesthetist", "Park-keeper", "Butler",
                   "Choreographer", "Blacksmith", "Chef", "Legal secretary",
                   "Songwriter", "Librarian", "Landscape gardener"
];

let hostArray = [];

for (let i = 0; i < 100; i++) {
    // const element = array[i];
    hostArray.push(new BasicHost(names[Math.floor(Math.random()*names.length)],occupations[Math.floor(Math.random()*occupations.length)]));
}
// console.log(hostArray);
// console.log(hostArray[Math.floor(Math.random()*hostArray.length)].saySpecs())
// console.log(hostArray[Math.floor(Math.random()*hostArray.length)].saySpecs())
// console.log(hostArray[Math.floor(Math.random()*hostArray.length)].saySpecs())