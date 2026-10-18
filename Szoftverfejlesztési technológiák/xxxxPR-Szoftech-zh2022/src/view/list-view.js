class ListView
{
	//Privát változó
	#container = document.querySelector('#main .inside');
	#finishClick = null;
	
	//Konstruktor
	constructor()
	{
		var html = this.#createWishList();
		 
		this.#container.innerHTML = html;
	}
	
	//Publikus metódusok
	
	//Privát metódusok
	
	#createWishList()
	{
		const data = JSON.parse(localStorage.getItem('costs-items'));
		var item1 = 0;
		var item2 = 0;
		var item3 = 0;

		for (var x in data){
			console.log("Type: "+data[x].title+" Price: "+data[x].price);
		}

		for (var x in data){
			if(data[x].title == 0){
				item1 += data[x].price;
			}
			if(data[x].title == 1){
				item2 += data[x].price;
			}
			if(data[x].title == 2){
				item3 += data[x].price;
			}
		}

		return `<section class="summary">
				
		<h2>Összesítés</h2>
		
		<div>
			<h3>Élelmiszer</h3>
			<p>${item1} Ft</p>
			<h3>Szórakozás</h3>
			<p>${item2} Ft</p>
			<h3>Rezsi</h3>
			<p>${item3} Ft</p>
			
			<a href="javascript:localStorage.clear();location.reload();" class="clear">Nullázás</a>
		</div>
		
	</section>`;
	}
}



