class WishesView
{
	//Privát változó
	#container = document.querySelector('#main .inside');
	
	//Konstruktor
	constructor()
	{
		var html = this.#createInputForm();
		 
		this.#container.innerHTML = html;
	}
	
	//Publikus metódus
	onSubmit(callback)
	{
		var button = this.#container.querySelector('form button');
		
		button.onclick = function(evt)
		{
			evt.preventDefault();
			
			var title = document.getElementById('type').value;
			var price = document.getElementById('price').value;
			price = parseInt(price);
			
			console.log(price);

			var item = 
			{
				title: title,
				price: price
			};

			callback(item);
		};
	}
	
	//Privát metódus
	#createInputForm()
	{
		return `<section class="newWish">
				<h2>Új költés</h2>
				<form action=""><div>
						<label for="title">Megnevezés</label>
						<select id="type">
							<option value="0">Élelmiszer</option>
							<option value="1">Szórakozás</option>
							<option value="2">Rezsi</option>
						</select>
					</div><div>
						<label for="price">Költség</label>
						<input type="number" id="price">
					</div>
					<button>Hozzáadás</button>
				</form></section>`;
	}
}