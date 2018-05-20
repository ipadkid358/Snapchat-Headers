/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MASConstraintDelegate;
#import <Snapchat/Snapchat-Structs.h>
@class NSMutableDictionary;

@interface MASConstraint : NSObject {

	BOOL _updateExisting;
	id<MASConstraintDelegate> _delegate;

}

@property (nonatomic,readonly) NSMutableDictionary * sc_userInfo; 
@property (nonatomic,readonly) NSMutableDictionary * scopera_userInfo; 
@property (assign,nonatomic) BOOL updateExisting;                                    //@synthesize updateExisting=_updateExisting - In the implementation block
@property (assign,nonatomic,__weak) id<MASConstraintDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)and;
-(/*^block*/id)equalToWithRelation;
-(void)setSizeOffset:(CGSize)arg1 ;
-(void)setLayoutConstantWithValue:(id)arg1 ;
-(id)addConstraintWithLayoutAttribute:(long long)arg1 ;
-(/*^block*/id)equalTo;
-(/*^block*/id)mas_equalTo;
-(/*^block*/id)greaterThanOrEqualTo;
-(/*^block*/id)mas_greaterThanOrEqualTo;
-(/*^block*/id)lessThanOrEqualTo;
-(/*^block*/id)mas_lessThanOrEqualTo;
-(/*^block*/id)priorityLow;
-(/*^block*/id)priorityMedium;
-(/*^block*/id)priorityHigh;
-(/*^block*/id)sizeOffset;
-(/*^block*/id)valueOffset;
-(/*^block*/id)mas_offset;
-(id)with;
-(/*^block*/id)multipliedBy;
-(/*^block*/id)dividedBy;
-(BOOL)updateExisting;
-(void)setUpdateExisting:(BOOL)arg1 ;
-(/*^block*/id)sc_priorityHighestOptional;
-(NSMutableDictionary *)sc_userInfo;
-(/*^block*/id)sc_priorityHighestOffset;
-(/*^block*/id)sc_priorityMediumOffset;
-(/*^block*/id)sc_priorityLowOffset;
-(/*^block*/id)sc_track;
-(NSMutableDictionary *)scopera_userInfo;
-(/*^block*/id)scopera_track;
-(id)init;
-(void)setDelegate:(id<MASConstraintDelegate>)arg1 ;
-(id<MASConstraintDelegate>)delegate;
-(/*^block*/id)key;
-(/*^block*/id)priority;
-(id)width;
-(id)height;
-(void)setOffset:(double)arg1 ;
-(/*^block*/id)offset;
-(id)leading;
-(/*^block*/id)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(/*^block*/id)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)centerX;
-(id)centerY;
-(void)install;
-(id)left;
-(id)top;
-(id)right;
-(id)bottom;
-(id)baseline;
-(void)uninstall;
-(id)trailing;
@end
