class WishesModel
{
	#data = [];
	
	constructor()
	{
		var stored = localStorage.getItem('costs-items');
		
		if(stored)
		{
			this.#data = JSON.parse(stored);
		}
	}
	
	add(item)
	{
		item.id = 1;
		if(this.#data.length > 0)
		{
			item.id = this.#data[this.#data.length - 1].id + 1;
		}
		
		this.#data.push(item);
		this.#save();
	}
	getItems(balance)
	{
		var result = [];
		var part = balance / this.#data.length;
		
		for(var item of this.#data)
		{
			item.done = parseInt(part / item.price * 100);
			result.push(item);
		}
		return result;
	}
	setFinished(id)
	{
		var price = 0;
		var x = this.#data.findIndex(item => item.id == id);
		
		if(x >= 0)
		{
			price = this.#data[x].price;
			
			this.#data.splice(x, 1);
			this.#save();
			
			return price;
		}
	}
	
	#save()
	{
		var stored = JSON.stringify(this.#data);
		localStorage.setItem('costs-items', stored);
	}
}





