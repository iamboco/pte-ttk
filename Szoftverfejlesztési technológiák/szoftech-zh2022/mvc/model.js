console.log("model")
const Model =
(function()
{
	var self = 
	{
		AddNewTask: function(task)
		{
			task.id = tasks.length +1;
			task.done = false;
			
			tasks.push(task);
			Save();
		},
		GetTasks: function()
		{
			var actual = [];
			
			for(var task of tasks)
			{
				if(!task.done)
				{
					actual.push(task);
				}
			}
			return actual;
		},
		SetTaskAsDone: function(id)
		{
			var x = id -1;
			tasks[x].done = true;
			Save();
		}
	};
	
	var tasks = [];
	
	function Save()
	{
		var data = JSON.stringify(tasks);
		localStorage.setItem("summary", data);
	}
	function Load()
	{
		var data = localStorage.getItem("summary");
		if(data)
		{
			tasks = JSON.parse(data);
		}
	}
	Load();
	
	return self;
})();