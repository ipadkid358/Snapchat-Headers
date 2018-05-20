/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCGiphySticker : NSObject {

	NSString* _type;
	NSString* _resourceUrl;
	NSString* _giphyId;

}

@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceUrl;              //@synthesize resourceUrl=_resourceUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * giphyId;                  //@synthesize giphyId=_giphyId - In the implementation block
+(id)packId;
-(id)toSOJUSticker;
-(id)initWithGiphyMetadata:(id)arg1 ;
-(NSString *)giphyId;
-(NSString *)type;
-(NSString *)resourceUrl;
@end
