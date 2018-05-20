/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SCGeoFilterImagesFetchRequest : NSObject {

	NSArray* _geoFilters;
	/*^block*/id _updateBlock;
	/*^block*/id _completeBlock;
	unsigned long long _state;

}
-(void)_completeCallbackWithSucceeded:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(void)_updateCallbackWithGeoFilterImage:(id)arg1 geoFilterAppearanceSetting:(id)arg2 ;
-(id)initWithGeoFilters:(id)arg1 updateBlock:(/*^block*/id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)fetchWithFilterContext:(id)arg1 ;
-(void)cancel;
@end

