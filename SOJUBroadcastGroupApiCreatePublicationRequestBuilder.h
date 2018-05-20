/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SOJUBroadcastGroupModelLocation;

@interface SOJUBroadcastGroupApiCreatePublicationRequestBuilder : NSObject {

	NSString* _idValue;
	NSString* _displayName;
	NSString* _privacy;
	NSArray* _posterUserIds;
	NSArray* _selectedAudienceUserIds;
	SOJUBroadcastGroupModelLocation* _geoFenceCenter;

}
+(id)withJUBroadcastGroupApiCreatePublicationRequest:(id)arg1 ;
-(id)setIdValue:(id)arg1 ;
-(id)setPrivacyEnum:(long long)arg1 ;
-(id)setPrivacy:(id)arg1 ;
-(id)setPosterUserIds:(id)arg1 ;
-(id)setSelectedAudienceUserIds:(id)arg1 ;
-(id)setGeoFenceCenter:(id)arg1 ;
-(id)setDisplayName:(id)arg1 ;
-(id)build;
@end

