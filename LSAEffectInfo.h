/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LSAEffectInfo : NSObject {

	BOOL _isThirdParty;
	BOOL _hasWaterMark;
	NSString* _effectId;
	NSString* _contentPath;

}

@property (copy,readonly) NSString * effectId;                 //@synthesize effectId=_effectId - In the implementation block
@property (copy,readonly) NSString * contentPath;              //@synthesize contentPath=_contentPath - In the implementation block
@property (readonly) BOOL isThirdParty;                        //@synthesize isThirdParty=_isThirdParty - In the implementation block
@property (readonly) BOOL hasWaterMark;                        //@synthesize hasWaterMark=_hasWaterMark - In the implementation block
-(NSString *)contentPath;
-(NSString *)effectId;
-(BOOL)hasWaterMark;
-(id)initWithEffectId:(id)arg1 contentPath:(id)arg2 isThirdParty:(BOOL)arg3 hasWaterMark:(BOOL)arg4 ;
-(id)initWithEffectId:(id)arg1 ;
-(id)initWithEffectId:(id)arg1 contentPath:(id)arg2 ;
-(BOOL)isThirdParty;
@end

