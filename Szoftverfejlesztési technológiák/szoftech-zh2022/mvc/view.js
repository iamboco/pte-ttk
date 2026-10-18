console.log("model")
const View = 
(function()
{
	var self =
	{
		SwitchToInputView: function()
		{
			collectionSection.style.display = "none";
			inputSection.style.display = "block";
			
			inputMessage.style.display = "none";
		},
		OnInputSubmit: function(callback)
		{
			inputSection.querySelector("button").onclick = function(evt)
			{
				evt.preventDefault();
				
				var title = document.getElementById("type").value.trim();
				var desc = document.getElementById("price").value;
				
				if(title)
				{
					var task = 
					{
						title: title,
						description: desc
					};
					
					callback(task);
				}
			};
		},
		ShowSuccessMessage: function()
		{
			inputMessage.style.display = "block";
			
			document.getElementById("type").value = "";
			document.getElementById("price").value = "";
		},
		
		SwitchToListView: function()
		{
			inputSection.style.display = "none";
			collectionSection.style.display = "block";
			
			ulList.innerHTML = '';
		},
		UpdateListView: function(tasks)
		{
			var html = '';
			
			if(tasks.length)
			{
				for(var task of tasks)
				{
					html += (`<li>
							<h3>${task.title}</h3>
							<p>${task.description}</p>
							<div>
								<a href="done" data-id="${task.id}">
									<i class="summary"></i> Elkészült
								</a>
							</div>
						</li>`);
				}
			}
			else
			{
				html = `<li>Jelenleg nincs egyetlen teendőd sem</li>`;
			}
			
			ulList.innerHTML = html;
			TaskDoneEvents();
		},
		OnTaskDoneRequest: function(callback)
		{
			taskDoneClick = callback;
		},
		
		OnNavigationClick: function(callback)
		{
			var links = document.querySelectorAll("#navigation-bar li a");
			
			for(var item of links)
			{
				item.onclick = function(evt)
				{
					evt.preventDefault();
					
					var href = this.getAttribute("href");
					callback(href);
				};
			}
		},
		OnMenuNewClick: function(callback)
		{
			menuNewClick = callback;
			NavigationInit();
		},
		OnMenuListClick: function(callback)
		{
			menuListClick = callback;
			NavigationInit();
		}
	};
	
	var inputSection = document.querySelector("section.input");
	var collectionSection = document.querySelector("section.collection");

	
	var menuNewClick = null;
	var menuListClick = null;
	var taskDoneClick = null;

	function NavigationInit()
	{
		View.OnNavigationClick(function(href)
		{
			switch(href)
			{
				case "new":
					if(menuNewClick) menuNewClick();
					break;
				case "list":
					if(menuListClick) menuListClick();
					break;
			}
		});
	}
	function TaskDoneEvents()
	{
		var links = ulList.querySelectorAll("a");
			
			for(var item of links)
			{
				item.onclick = function(evt)
				{
					evt.preventDefault();
					
					if(taskDoneClick)
					{	
						var id = this.dataset.id;
						taskDoneClick(id);
					}
				};
			}
	}
	
	return self;
})();