//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface UserGameRankInfo : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasScore:1;
    unsigned int hasRank:1;
    unsigned int score;
    unsigned int rank;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRank:) unsigned int rank; // @synthesize rank;
@property(readonly, nonatomic) BOOL hasRank; // @synthesize hasRank;
@property(nonatomic, setter=SetScore:) unsigned int score; // @synthesize score;
@property(readonly, nonatomic) BOOL hasScore; // @synthesize hasScore;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
