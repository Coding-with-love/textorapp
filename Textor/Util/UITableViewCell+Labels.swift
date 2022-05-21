
import Foundation
import UIKit

extension UITableViewCell {

	func subviewLabels() -> [UILabel] {
		return deepSubviews().compactMap({ $0 as? UILabel })
	}
	
}

extension UIView {
	
	func deepSubviews() -> [UIView] {
		
		var views = [UIView]()
		
		for subview in subviews {
			views.append(subview)
			views.append(contentsOf: subview.deepSubviews())
		}
		
		return views
	}
	
	
}
