/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@class SCOperaPage, NSString;

@interface SCOperaShowActionMenuButtonLayer : NSObject <SCOperaLayer> {

	BOOL _enableTeachingToolTips;
	BOOL _smallTapZone;
	SCOperaPage* _page;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                  //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) BOOL enableTeachingToolTips;              //@synthesize enableTeachingToolTips=_enableTeachingToolTips - In the implementation block
@property (nonatomic,readonly) BOOL smallTapZone;                        //@synthesize smallTapZone=_smallTapZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(BOOL)smallTapZone;
-(BOOL)enableTeachingToolTips;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
@end

