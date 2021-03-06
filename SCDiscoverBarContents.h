/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, SCDiscoverMediaBlobMetadata, SCDiscoverLinkInfo, NSString;

@interface SCDiscoverBarContents : NSObject {

	BOOL _snapValidated;
	BOOL _isAd;
	BOOL _didRetrySnapValidation;
	UIImage* _channelIconImage;
	SCDiscoverMediaBlobMetadata* _discoverMetadata;
	SCDiscoverLinkInfo* _linkInfo;
	long long _linkState;
	NSString* _publisherName;

}

@property (nonatomic,retain) UIImage * channelIconImage;                                  //@synthesize channelIconImage=_channelIconImage - In the implementation block
@property (nonatomic,retain) SCDiscoverMediaBlobMetadata * discoverMetadata;              //@synthesize discoverMetadata=_discoverMetadata - In the implementation block
@property (nonatomic,retain) SCDiscoverLinkInfo * linkInfo;                               //@synthesize linkInfo=_linkInfo - In the implementation block
@property (assign,nonatomic) long long linkState;                                         //@synthesize linkState=_linkState - In the implementation block
@property (nonatomic,copy) NSString * publisherName;                                      //@synthesize publisherName=_publisherName - In the implementation block
@property (assign,nonatomic) BOOL snapValidated;                                          //@synthesize snapValidated=_snapValidated - In the implementation block
@property (assign,nonatomic) BOOL isAd;                                                   //@synthesize isAd=_isAd - In the implementation block
@property (assign,nonatomic) BOOL didRetrySnapValidation;                                 //@synthesize didRetrySnapValidation=_didRetrySnapValidation - In the implementation block
-(void)setPublisherName:(NSString *)arg1 ;
-(void)setIsAd:(BOOL)arg1 ;
-(SCDiscoverMediaBlobMetadata *)discoverMetadata;
-(BOOL)snapValidated;
-(UIImage *)channelIconImage;
-(SCDiscoverLinkInfo *)linkInfo;
-(void)setChannelIconImage:(UIImage *)arg1 ;
-(void)setDiscoverMetadata:(SCDiscoverMediaBlobMetadata *)arg1 ;
-(void)setLinkInfo:(SCDiscoverLinkInfo *)arg1 ;
-(void)setSnapValidated:(BOOL)arg1 ;
-(BOOL)didRetrySnapValidation;
-(void)setDidRetrySnapValidation:(BOOL)arg1 ;
-(BOOL)isAd;
-(id)initWithContents:(id)arg1 ;
-(long long)linkState;
-(void)setLinkState:(long long)arg1 ;
-(NSString *)publisherName;
@end

