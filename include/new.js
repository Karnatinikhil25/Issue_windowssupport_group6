const depthfirstsearch=(graph,source)=>{

    const stack=[sourse];
    while(stack.length>0){
const dire=stack.pop();
console.log(current);
for (let neighbor of graph[current]){
    stack.push(neighbor);


}

    }
};
const graph={

    a:['b','c'],b:['d'],c:['e'],d:['f'],f:[]
};
depthfirstsearch(graph,'a');