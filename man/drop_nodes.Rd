% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/cascade.R
\name{drop_nodes}
\alias{drop_nodes}
\title{Drop nodes from a cascade object}
\usage{
drop_nodes(cascades, nodes, drop = TRUE)
}
\arguments{
\item{cascades}{cascade, object to drop nodes from.}

\item{nodes}{character or integer, vector of node_ids to drop.}

\item{drop}{logical, Should empty cascades be dropped.}
}
\value{
An object of class cascade containing the cascades without the 
    dropped nodes.
}
\description{
Drop nodes from a cascade object
}
\examples{

data(policies)
cascades <- as_cascade_long(policies, cascade_node_name = 'statenam', 
                            event_time = 'adopt_year', cascade_id = 'policy')
new_cascades <- drop_nodes(cascades, c("California", "New York"))

}
