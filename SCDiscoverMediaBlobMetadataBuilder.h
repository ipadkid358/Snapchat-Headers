/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSString, UIColor;

@interface SCDiscoverMediaBlobMetadataBuilder : NSObject {

	NSString* _publisherName;
	NSString* _publisherDisplayName;
	NSString* _publisherUniqueName;
	NSString* _dSnapId;
	NSString* _adSnapId;
	long long _blobMediaType;
	NSString* _editionId;
	CGRect _viewport;
	BOOL _linkToLongform;
	long long _caption;
	long long _drawing;
	NSString* _filterInfo;
	NSString* _filterVisual;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSString* _remoteUrl;

}
+(id)withDiscoverMediaBlobMetadata:(id)arg1 ;
-(id)setEditionId:(id)arg1 ;
-(id)setFilterInfo:(id)arg1 ;
-(id)setFilterVisual:(id)arg1 ;
-(id)setPublisherName:(id)arg1 ;
-(id)setLinkToLongform:(BOOL)arg1 ;
-(id)setRemoteUrl:(id)arg1 ;
-(id)setPublisherDisplayName:(id)arg1 ;
-(id)setPublisherUniqueName:(id)arg1 ;
-(id)setDSnapId:(id)arg1 ;
-(id)setAdSnapId:(id)arg1 ;
-(id)setBlobMediaType:(long long)arg1 ;
-(id)setPrimaryColor:(id)arg1 ;
-(id)setSecondaryColor:(id)arg1 ;
-(id)build;
-(id)setCaption:(long long)arg1 ;
-(id)setDrawing:(long long)arg1 ;
-(id)setViewport:(CGRect)arg1 ;
@end

