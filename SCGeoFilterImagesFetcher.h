/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCGeoFilterImagesFetchRequest, NSMutableDictionary, SCPreviewFilterDataProviderContextData;

@interface SCGeoFilterImagesFetcher : NSObject {

	SCGeoFilterImagesFetchRequest* _request;
	NSMutableDictionary* _updateRequests;
	SCPreviewFilterDataProviderContextData* _contextData;

}
-(id)initWithContextData:(id)arg1 ;
-(void)fetchGeoFilterImagesWithGeoFilters:(id)arg1 updateBlock:(/*^block*/id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)updateGeoFilter:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end

