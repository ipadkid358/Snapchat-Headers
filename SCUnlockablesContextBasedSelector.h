/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, SCPreviewFilterDataProviderContextData;

@interface SCUnlockablesContextBasedSelector : NSObject {

	NSString* _initializedTriggerContext;
	NSDictionary* _clientUnlockablesContextDictionary;
	BOOL _friendsWithBitMoji;
	SCPreviewFilterDataProviderContextData* _filterContextData;

}

@property (nonatomic,retain) SCPreviewFilterDataProviderContextData * filterContextData;              //@synthesize filterContextData=_filterContextData - In the implementation block
+(id)visualContextFilterIds:(id)arg1 ;
+(id)emojiFriendContextMap;
-(SCPreviewFilterDataProviderContextData *)filterContextData;
-(id)initWithFilterContextData:(id)arg1 ;
-(id)filterGeofilters:(id)arg1 ;
-(id)enforceFriendFiltersCount:(id)arg1 ;
-(void)setFilterContextData:(SCPreviewFilterDataProviderContextData *)arg1 ;
-(id)_cameraContext;
-(id)_mediaTypeContext;
-(id)_triggerContext;
-(id)_friendContext;
-(id)_actionmojiContext;
-(id)_visualContext;
@end

