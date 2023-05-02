


console.log(document.querySelector('.js-button').classList.contains('js-button') ? true : false);

function checkToggle(button) {
    
    if(button === 'gaming'){

        if (document.querySelector(`.js-button-gaming`).classList.contains('is-toggled')) {
            document.querySelector(`.js-button-gaming`).classList.remove('is-toggled')
        } else {
            if(document.querySelector(`.js-button-music`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-music`).classList.remove('is-toggled')
            }
            if(document.querySelector(`.js-button-tech`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-tech`).classList.remove('is-toggled')
            }
            document.querySelector(`.js-button-${button}`).classList.add('is-toggled')
        }
    }

    if(button === 'music'){
        
        if (document.querySelector(`.js-button-music`).classList.contains('is-toggled')) {
            document.querySelector(`.js-button-music`).classList.remove('is-toggled')
        } else {
            if(document.querySelector(`.js-button-gaming`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-gaming`).classList.remove('is-toggled')
            }
            if(document.querySelector(`.js-button-tech`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-tech`).classList.remove('is-toggled')
            }
            document.querySelector(`.js-button-${button}`).classList.add('is-toggled')
        }
    }

    if(button === 'tech'){
        
        if (document.querySelector(`.js-button-tech`).classList.contains('is-toggled')) {
            document.querySelector(`.js-button-tech`).classList.remove('is-toggled')
        } else {
            if(document.querySelector(`.js-button-music`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-music`).classList.remove('is-toggled')
            }
            if(document.querySelector(`.js-button-gaming`).classList.contains('is-toggled')){
                document.querySelector(`.js-button-gaming`).classList.remove('is-toggled')
            }
            document.querySelector(`.js-button-${button}`).classList.add('is-toggled')
        }
    }

    
}