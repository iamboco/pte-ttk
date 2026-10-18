console.log("model")
const Controller =
(function()
{
	var self = 
	{
		Init: function()
		{
			View.OnMenuNewClick(self.InputActivity);
			View.OnMenuListClick(self.ListActivity);
			View.OnInputSubmit(NewTaskSubmit);
			View.OnTaskDoneRequest(TaskDoneRequest);
		},
		InputActivity: function()
		{
			View.SwitchToInputView();
		},
		ListActivity: function()
		{
			View.SwitchToListView();
			View.UpdateListView( Model.GetTasks() );
		}
	};
	 
	function NewTaskSubmit(task)
	{
		Model.AddNewTask(task); 
		View.ShowSuccessMessage();
	}
	function TaskDoneRequest(id)
	{
		Model.SetTaskAsDone(id);
		self.ListActivity();
	}
	
	return self;
})();