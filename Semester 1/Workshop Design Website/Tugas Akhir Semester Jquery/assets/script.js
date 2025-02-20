$(document).ready(function () {
    // Gallery PopUp
    var popUp = $(".popUp");
    $(".gallery-img").on("click", (event) => {
        popUp.toggleClass("popped");

        if (popUp.is(".popped")) {
            var imgLink = $(event.target).children().attr("src");
            popUp.append("<img class='popUp-img' src='" + imgLink + "'>")
        }
    })
    // Contact Form
    $(".nav-btn").on("click", () => {
        popUp.toggleClass("popped");

        $(".contact-card").show()
    })

    $(".popUp-exit").on("click", () => {
        popUp.toggleClass("popped");
        $(".popUp-img").remove();
        $(".contact-card").hide();
    })
});