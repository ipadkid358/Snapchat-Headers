/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCSearchWebAttachmentCellViewModel : NSObject <NSCopying> {

	BOOL _shouldShowSeparatorLine;
	NSString* _titleText;
	NSString* _urlString;
	long long _cellType;

}

@property (nonatomic,copy,readonly) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) long long cellType;                        //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeparatorLine;              //@synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine - In the implementation block
-(BOOL)shouldShowSeparatorLine;
-(id)initWithTitleText:(id)arg1 urlString:(id)arg2 cellType:(long long)arg3 shouldShowSeparatorLine:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)titleText;
-(NSString *)urlString;
-(long long)cellType;
@end

