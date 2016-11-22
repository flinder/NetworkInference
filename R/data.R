# TODO: 
# - what is volume in edge_info output? 

#' Example cascades
#'
#' An example dataset of 31 nodes and 54 cascades. From the original netinf 
#' implementation in SNAP. 
#' 
#' @name cascades
#' 
#' @usage data(cascades)  
#' @docType data
#' 
#' @format An object of class \code{cascade} containing 4 objects
#' \describe{
#'   \item{node_names}{Character node names}
#'   \item{cascade_nodes}{A list of integer vectors. Each containing the names of the
#'       nodes infected in this cascades in the order of infection}
#'   \item{cascade_times}{A list of numeric vectors. Each containing the infection
#'       times for the corresponding nodes in cascade_nodes}
#' }
#' @source \url{https://github.com/snap-stanford/snap/blob/master/examples/netinf/example-cascades.txt}
"cascades"



#' Validation output from netinf source for example cascades
#' 
#' @name validation
#' 
#' @usage data(validation)  
#' @docType data
#' 
#' @format An object of class \code{data.frame} with 6 columns, containing:
#' \describe{
#'   \item{origin_node}{Origin of diffusion edge.}
#'   \item{destination_node}{Destination node of diffusion edge.}
#'   \item{volume}{??}
#'   \item{marginal_gain}{Marginal gain from edge.}
#'   \item{median_time_difference}{Median time between events in origin and 
#'       destination}
#'   \item{mean_time_difference}{Mean time between events in origin and 
#'       destination}
#' }
#' 
#' @source Output from netinf example program (\url{https://github.com/snap-stanford/snap/tree/master/examples/netinf})
"validation"

# # Code to generate validation dataset. Data is copied from netinf source example
# # ouput
#
# dat <- c(23,0,21,3049.810355,1.543899,2.136381,
# 9,5,21,3049.291245,1.574027,2.161101,
# 0,31,20,2905.326401,1.889040,2.099126,
# 5,14,16,2326.861114,1.732281,1.936626,
# 5,3,15,2181.930785,1.229308,1.903394)
#
# validation <- data.frame(matrix(dat, nc = 6, byrow = TRUE))
# validation <- validation[order(validation[, 1], validation[, 2]), ]
# rownames(validation) <- c(1:nrow(validation))
# validation[, 1] <- as.character(validation[, 1])
# validation[, 2] <- as.character(validation[, 2])
# colnames(validation) <- c("origin_node", "destination_node", "volume", 
#                          "marginal_gain", "median_time_difference",
#                          "mean_time_difference")
# save(validation, file = 'data/validation.RData')