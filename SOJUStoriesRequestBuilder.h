/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SOJUStoriesRequestBuilder : NSObject {

	NSString* _timestamp;
	NSString* _reqToken;
	NSString* _username;
	NSString* _featuresMap;
	NSString* _checksum;
	NSString* _checksumMissingReason;
	NSNumber* _screenWidthIn;
	NSNumber* _screenHeightIn;
	NSNumber* _screenWidthPx;
	NSNumber* _screenHeightPx;
	NSNumber* _useNewStoryViewerList;
	NSNumber* _orderingEnabled;
	NSString* _syncMetadata;
	NSString* _storiesRequestSource;

}
+(id)withJUStoriesRequest:(id)arg1 ;
-(id)setChecksumMissingReasonEnum:(long long)arg1 ;
-(id)setScreenWidthInValue:(float)arg1 ;
-(id)setScreenHeightInValue:(float)arg1 ;
-(id)setScreenWidthPxValue:(int)arg1 ;
-(id)setScreenHeightPxValue:(int)arg1 ;
-(id)setUseNewStoryViewerListValue:(BOOL)arg1 ;
-(id)setReqToken:(id)arg1 ;
-(id)setSyncMetadata:(id)arg1 ;
-(id)setScreenWidthIn:(id)arg1 ;
-(id)setScreenHeightIn:(id)arg1 ;
-(id)setScreenWidthPx:(id)arg1 ;
-(id)setScreenHeightPx:(id)arg1 ;
-(id)setOrderingEnabledValue:(BOOL)arg1 ;
-(id)setStoriesRequestSourceEnum:(long long)arg1 ;
-(id)setChecksumMissingReason:(id)arg1 ;
-(id)setUseNewStoryViewerList:(id)arg1 ;
-(id)setOrderingEnabled:(id)arg1 ;
-(id)setStoriesRequestSource:(id)arg1 ;
-(id)setTimestamp:(id)arg1 ;
-(id)setChecksum:(id)arg1 ;
-(id)build;
-(id)setFeaturesMap:(id)arg1 ;
-(id)setUsername:(id)arg1 ;
@end

