/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SOJUBroadcastMobsModelLocation, NSNumber;

@interface SOJUBroadcastMobsApiUpdateMobStoryRequestBuilder : NSObject {

	NSString* _idValue;
	NSString* _typeVal;
	NSString* _displayName;
	NSArray* _contributors;
	SOJUBroadcastMobsModelLocation* _geoFenceCenter;
	NSString* _geoSubtext;
	NSString* _privacyType;
	NSArray* _viewers;
	NSNumber* _enableAutosave;
	NSString* _mischiefId;

}
+(id)withJUBroadcastMobsApiUpdateMobStoryRequest:(id)arg1 ;
-(id)setIdValue:(id)arg1 ;
-(id)setGeoFenceCenter:(id)arg1 ;
-(id)setTypeValEnum:(long long)arg1 ;
-(id)setPrivacyTypeEnum:(long long)arg1 ;
-(id)setEnableAutosaveValue:(BOOL)arg1 ;
-(id)setTypeVal:(id)arg1 ;
-(id)setGeoSubtext:(id)arg1 ;
-(id)setPrivacyType:(id)arg1 ;
-(id)setViewers:(id)arg1 ;
-(id)setEnableAutosave:(id)arg1 ;
-(id)setMischiefId:(id)arg1 ;
-(id)setDisplayName:(id)arg1 ;
-(id)build;
-(id)setContributors:(id)arg1 ;
@end

