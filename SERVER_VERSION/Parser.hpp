#pragma once

#include <istream>
#include <vector>
#include <cstdint>

#include "Box.hpp"

/**
 * @brief Contains code for the boxnesting problem
 */
namespace BoxNesting
{
/**
 * @brief Parser class that handles reading from input to obtain boxes
 */
class Parser
{
public:
	/**
	 * @brief Delete constructor
	 */
	Parser() = delete;

	/**
	 * @brief Delete virtual destructor
	 */
	virtual ~Parser() = delete;

	/**
	 * @brief Delete copy constructor
	 * \param b
	 */
	Parser(const Parser& b) = delete;

	/**
	 * @brief Delete move constructor
	 * \param b
	 */
	Parser(Parser&& b) = delete;

	/**
	 * @brief Delete copy assignment operator
	 * \param b
	 * \return
	 */
	Parser& operator=(const Parser& b) = delete;

	/**
	 * @brief Delete move assignment operator
	 * \param b
	 * \return
	 */
	Parser& operator=(Parser&& b) = delete;

	/**
	 * @brief Get boxes from stdin.
	 *
	 * @throw ParserError Parsing failed due to malformed input
	 * @throw std::invalid_argument Parsing succeeded but the box specification is not valid
	 *
	 * @param inputStream The inputStream to read from
	 * @return A set of boxes
	 */
	static std::vector<Box> getBoxes(std::istream& inputStream);

private:
	/**
	 * @brief Wait for box specification from inputStream and return a box object from it

	 * @throw ParserError Parsing failed due to malformed input
	 * @throw std::invalid_argument Parsing succeeded but the box specification is not valid
	 *
	 * @param inputStream The inputStream to read from
	 * @return Instantiated box object
	 */
	static Box parseBoxSpecification(std::istream& inputStream);
};
} // BoxNesting