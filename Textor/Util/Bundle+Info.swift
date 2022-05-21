
import Foundation

extension Bundle {

	public var version: String {
		return object(forInfoDictionaryKey: "CFBundleShortVersionString") as? String ?? ""
	}

	public var build: String {
		return object(forInfoDictionaryKey: "CFBundleVersion") as? String ?? ""
	}

}
